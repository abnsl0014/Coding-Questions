#include<bits/stdc++.h>
#define pb push_back
using namespace std;

//template<typename T>
int temp=0;///if path is avaiable or not
vector<string>final;
class touristMap {
	//T V;
	map<string,list<pair<string,int> > >m;
public:
    void addPath(string u,string v, int distance) {
        //Assuming Bidirectional Way
        m[u].pb(make_pair(v,distance));
        m[v].pb(make_pair(u,distance));
    }
    void printAdjList() {
        for(auto j:m){
            cout<<j.first<<"-->";
            for(auto vertex: j.second){
                cout<<"("<<vertex.first<<","<<vertex.second<<")";
            }
            cout<<endl<<endl;
        }
    }
    void printMap() {
        cout<<"TRAVELER'S ITINERARY PLANNER"<<endl<<endl;
        cout<<"MAP:";
        cout<<endl;
        cout<<"*********************************************************************************"<<endl;
        cout<<"*                                        /|                                     * "<<endl;
        cout<<"*                                       / |                                     * "<<endl;
        cout<<"*                                      '--|                        /|           * "<<endl;
        cout<<"*                                         |                       '-|           * "<<endl;
        cout<<"*    ______/|_____________6hr_______.-----|-----.             .----|-----.      * "<<endl;
        cout<<"*    |    / |++++++++++.            |           |             |{HauzKhas}|      * "<<endl;
        cout<<"*    |____| {AppuGhar} |___ 4hr____ |  {RedFort}|             .----------.      * "<<endl;
        cout<<"*     ____|            |            |           |_____6hr _____________|___     * "<<endl;
        cout<<"*     |   **************            .+++++++++++.                    / |        * "<<endl;
        cout<<"*     |                                                            5hr |        * "<<endl;
        cout<<"*     |                                                           /    |        * "<<endl;
        cout<<"*     2hr                    .-++-----++--.        .^^^^^^^^^^^^.     3hr       * "<<endl;
        cout<<"*     |                   __ |{ DaryaGanj}|________|{ IndiaGate}|      |        * "<<endl;
        cout<<"*     |                  /   |            |   1hr  |            |      |        * "<<endl;
        cout<<"*     |____.*********. 1hr   '--+++++++++-.        .^^^^^^^^/^^^^.     |        * "<<endl;
        cout<<"*          |{Chandani| /                                   3hr         |        * "<<endl;
        cout<<"*          |  Chowk} |/              /|----------.        /            |        * "<<endl;
        cout<<"*          |         |              / |          |      <<<<           >>>>     * "<<endl;
        cout<<"*     _____.---------.            ./--|----------|       {{ LotusTemple }}      * "<<endl;
        cout<<"*     |                           |              |        {{{{       }}}}       * "<<endl; 
        cout<<"*     2hr                         |{JantarMantar}|          {{{    }}}          * "<<endl;
        cout<<"*     |____.---------. _____3hr __|              |----6hr-----////////          * "<<endl;
        cout<<"*          | {Jama   |            .--------------.               |              * "<<endl;
        cout<<"*          |  Masjid}|                                           |              * "<<endl;
        cout<<"*          |         |                                         -----            * "<<endl;
        cout<<"*          .---------.                                             |            * "<<endl;
        cout<<"*                |------------------------3hr----------------------|            * "<<endl;
        cout<<"*                                                                               * "<<endl;
        cout<<"*                                                                               * "<<endl;
        cout<<"*                                                                               * "<<endl;
        cout<<"*********************************************************************************"<<endl;
	}
    void paths2(string source,string destination,int time,vector<string> v,map<string,bool> &marked,int& calls) {
        ++calls;
        if(source==destination) {
            for(int i=0;i<v.size();i++) {
                cout<<v[i]<<"-->";
            } cout<<destination<<endl;
        }
        v.push_back(source);
        marked[source]=true;
        for(auto adj : m[source]) {
            if((!marked[adj.first]) && adj.second <= time)
                paths2(adj.first,destination,time-adj.second,v,marked,calls);
        } marked[source]=false;
    }
    void paths(string source,string destination,int time,int currTime,vector<string>v,map<string,bool>marked,int& calls) {
        ++calls;
        if(currTime>time){
            return;
        }
        if(source==destination) {
            //v.pb(destination);
            for(int it=0; it!=v.size();it++){
                cout<<v[it]<<"-->";
            }
            temp=1;
            cout<<destination<<endl;
            cout<<" "<<"No. of places Visited :"<<v.size(); 
            cout<<endl;
            cout<<endl;
            if(v.size()>final.size()){
                final.clear();
                for(int it=0;it<v.size();it++){
                    final.pb(v[it]);
                }
            }
            return;
        }
        if(marked[source]){
            return;
        }
        v.pb(source);
        marked[source]=true;
        for(auto neighbour : m[source]) {
            paths(neighbour.first,destination,time,currTime+neighbour.second,v,marked,calls);
            //currTime-=neighbour.second;
            //v.pop_back();
        }
        //v.pop_back();
    }
};
int main() {
	touristMap ourMap;
	ourMap.addPath("A","B",2);
	ourMap.addPath("A","C",3);
	ourMap.addPath("A","D",5);
	ourMap.addPath("A","E",4);
	ourMap.addPath("B","C",4);
	ourMap.addPath("B","D",2);
	ourMap.addPath("B","E",1);
	ourMap.addPath("C","D",1);
	ourMap.addPath("C","E",3);
	ourMap.addPath("D","E",5);
	// ourMap.addPath("AppuGhar","RedFort",4);
	// ourMap.addPath("AppuGhar","ChandaniChowk",2);
	// ourMap.addPath("RedFort","AppuGhar",6);
	// ourMap.addPath("RedFort","HauzKhas",6);
	// ourMap.addPath("HauzKhas","IndiaGate",5);
	// ourMap.addPath("HauzKhas","LotusTemple",3);
	// ourMap.addPath("IndiaGate","DaryaGanj",1);
	// ourMap.addPath("IndiaGate","LotusTemple",3);
	// ourMap.addPath("DaryaGanj","ChandaniChowk",1);
	// ourMap.addPath("ChandaniChowk","JamaMasjid",2);
	// ourMap.addPath("JamaMasjid","JantarMantar",3);
	// ourMap.addPath("JantarMantar","LotusTemple",6);
	// ourMap.addPath("JamaMasjid","LotusTemple",3);
    // ourMap.addPath("Amrritsar","Delhi",2);
    // ourMap.addPath("Amrritsar","jaipur",4);
    // ourMap.addPath("jaipur","Delhi",18);
    // ourMap.addPath("bhopal","agra",70);
    // ourMap.addPath("agra","Delhi",20);
    // ourMap.addPath("Mumbai","bhopal",4);
    // ourMap.addPath("jaipur","agra",5);
    // ourMap.addPath("pune","bhopal",3);
    // ourMap.addPath("pune","Mumbai",2);
    //ourMap.printMap();
    ourMap.printAdjList();
    string source,destination;
    int time;
    cout<<"Enter your Source and Destination"<<endl;
    cout<<"Source :"<<" ";
    cin>>source;
    cout<<"Destination:"<<" ";
    cin>>destination;
    cout<<"Enter how much time do you have in hours?";cout<<endl;
    cin>>time;
    vector<string>v;
    map<string,bool>marked;
    ///passing source,destination and time in our backtracking algorithm..
    int calls;
    calls=0;
    ourMap.paths(source,destination,time,0,v,marked,calls);
    cout<<endl<<calls<<endl;
    if(temp==0){
    	cout<<"Sorry,no path is possible"<<endl;
    }
    else{
    	cout<<"Best way to go is ";
    	cout<<endl;
    	for(int i=0;i<final.size();++i){
    		cout<<final[i]<<"-->";
    	}
    	cout<<destination;cout<<endl<<endl;
    	cout<<"Wohoo we will visit "<< " "<<final.size()<<" places and reach our Destination on Time"<<endl;

    }
    calls=0;
    ourMap.paths2(source,destination,time,v,marked,calls);
    cout<<endl<<calls<<endl;
	return 0;
}